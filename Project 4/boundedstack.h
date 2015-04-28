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
    void shift(size_t sizes)
    {
        for (int i = (int)sizes; i >= 0; i--)
        {
            if (i < 50)
                data[i] = data[i-1];
        }
        
    }
    void empty()
    {
      for (size_t i = 0; i <= 49; i++)
      {
        std::cout << i + 1 << ": " << bsa.pop() << std::endl;
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

