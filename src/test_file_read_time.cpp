#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <my_utils_kk4.hpp>

int main(int argc, char** argv){

    if(argc != 2){
        std::cerr << "Usage: " << argv[0] << " <num of files>" << std::endl;
        return 1;
    }

    const int num_of_files = std::stoi(argv[1]);

    my_utils_kk4::StopWatch sw;
    

    for(int i = 1; i <= num_of_files; i++){

        sw.start();
        
        std::stringstream ss;
        ss << "../files_800kB/file_" << std::setw(5) << std::setfill('0') << i;
        std::ifstream fin;
        
        fin.open(ss.str(), std::ios::binary);
        if(! fin){
            std::cerr << "Error: could not open " << ss.str() << std::endl;
        }

        const std::vector<char> data(std::istreambuf_iterator<char>(fin), {});

        sw.stop();

        std::cout << '\r' << data.size() << std::flush;
    }
    std::cout << std::endl;
    std::cerr << sw.getResult() * 1000 << " ms" << std::endl;
}

