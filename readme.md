# CS11 homework repo

## This will be the repo I store my homework in.

### Project 1

#### Background:

For this project, download the following text files from the project folder:

- weblog.txt

- weblog_visitedpages_unique.txt

The **weblog.txt** file is an Apache web log taken from the web server for St. Mary's University. When a visitor goes to their web site, the visitor's browser makes a request to the web server to view a web page, which is a file residing on the server. Each time a page is requested by a browser, the web server records information about that request. This **weblog.txt** holds the details of some of those requests. See the page in this project for a list of fields with an example:

#### Web Log Example

This file does not include all possible information that could be collected by a web server. The full description of the apache log file format can be found here: http://httpd.apache.org/docs/2.2/logs.html

The **weblog_vistedpages_unique.txt** is a list of the webpages that can be visited on the website for the above weblog.
For this project, you will be creating a report of user activity on the website. The purpose of this report will be for web usage mining*. In this case, your report will be input for statistical software for sequence pattern analysis. This analysis will be used to improve navigation between pages on the website and for targeting content on relevant and popular pages on the site. You will not have to do the analysis, but you have a critical role in it by pre-processing the data for the analysis.

#### Requirements:

Write a client program that uses a dynamic container class of string type. The container class may be taken from the text, lecture notes or from the Standard Template Library (STL). You must use the same class for the weblog and pages container objects. For example:

    vector<string> weblog; 
    vector<string> pages;
If you create your own container class, you can only create one class to be used to create both the weblog and pages container objects. For example, if you created a container class called bag, you would create your objects like this:

    bag weblog;
    bag pages;

Your main function can only create objects and call functions. All functional requirements for this program must be met in one or more functions (member or non-member) and not in main. Use main as the driver for your program only.

The final program should fulfil these functional requirements:

Load each line of the **weblog.txt** into a weblog object of the dynamic container class.

Load each line of the **weblog_visitedpages_unique.txt** file into a pages object of the same dynamic container class. The index numbers of each entry in the array will represent the page number for each page.

Each line in the weblog file includes an IP address and a url of the webpage that was visited by that IP. Each url has a corresponding entry in the container of **weblog_visited_pages.txt** entries. Display the unique IP address from the weblog object, then display the pages index numbers of all of the urls visited by that IP address from the pages object. Your program will print the IP address only once, regardless of how many sequential lines exist with that same IP in the weblog container. For example, the first few lines of output should look like this:

172.138.80.174 1 2 16 17 2

140.184.71.52 1 1 2

206.135.248.66 2

142.177.53.120 2

###Project 2

####MM, YUP!

###Project 3

####Part 1.
Convert your project 2 list container class to be a template. Populate
at least two different objects of your container class each with a different
data type (i.e. same container class, different data types). Provide client code
that uses your project 3 function for both of these lists.

#####Note:
As long as the finished program meets the requirements of project 3 as a
template, you can modify your project 3 code in any way necessary, including
redesigning your original program (optional).

####Part 2.
Write an alternative program to meet the requirements for project 2
using the STL list template class instead. Your function should use an iterator
as the cursor for your list objects. As with part 1, you should demonstrate the
use of more than one data type.