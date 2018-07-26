#include <iostream>
#include <list>
#include <map>
#include <string>
#include <fstream>

class Node{

    private:
        std::string name_;
        std::list<int>::iterator it_;
        //std::ofstream fd_;

    public:
        std::string name() { return name_;}
        std::list<int>::iterator it() { return it_;}
        //std::ofstream& fd() { return fd_;}
};

class LRU{

    private:
        std::list<int> frames_list_;
        std::map<int,Node> frames_to_files_;

    public:
        std::list<int> frames_list() { return frames_list_;}
        std::map<int,Node> frames_to_files() { return frames_to_files_;}
};

int main(){


    return 0;
}
