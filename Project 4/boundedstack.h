#include <iostream>
#include <fstream>

class boundedstack
{
public:
    void read(std::string infi)
    {
        std::ifstream iflol;
        std::string temps;
        iflol.open(infi);
        while (getline(iflol, temps)) {
            push(temps);
        }
        iflol.close();
    }
    void shift(std::string dir, size_t sizes)
    {
        if (dir == "up" && top < 49)
        {
            std::string temporary;
            for (size_t i = top; i < 49; i++)
            {
                temporary = data[i];
                data[i+1] = temporary;
            }
        } else if (dir == "down" && size > 0){
            for (int i = (int)sizes; i >= 0; i--)
            {
                if (i < 50)
                    data[i] = data[i-1];
            }
        }
    }
    virtual void push(std::string) = 0;
    virtual std::string pop() = 0;
protected:
    std::string data[50];
    size_t top;
    size_t size;
};
class boundedstacka : public virtual boundedstack {
public:
    boundedstacka() : size(0) {};
    virtual void push (std::string);
    virtual std::string pop();
private:
    size_t size;
};
class boundedstackb : public virtual boundedstack {
public:
  boundedstackb() : top(50), size(0) {};
  virtual void push (std::string);
  virtual std::string pop();
private:
  size_t top;
  size_t size;
};

