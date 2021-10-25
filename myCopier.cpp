////////////////c////This script will read the lines of an .txt file, copy them, and write them to another file/////////////////////

#include<iostream> 
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "/home/hoofapoofa/IotHw/"

//make sure it will only accept 2
int main(int argc, char* argv[]){
	if (argc!=3){
		cout << endl;
		cout << "Usage is copy/pasting one file to another" << endl;
		cout << "e.g. ./myCopier arg[1] arg[2]" << endl; 
		cout << endl;

	return 2;
	}
	
	// setting filenames for arguments
	string first(argv[1]);
	string sec(argv[2]);
	
		cout << endl;
		cout << "File to be copied = " << first << endl;
		cout << "File written in = " << sec << endl;
		cout << endl;
	
	// file streams
	fstream copy;
	fstream paste;

	// declaring path for arguements
	string firstp = FILE_PATH + first;
	string secp = FILE_PATH + sec;
	
	copy.open((firstp).c_str(),ios::in);
	paste.open((secp).c_str(),ios::out);
	
	string line;
	string output;
	int lines = 0;
	
	while(getline(copy,line)){
		output += line + "\n";
			lines++;
	}
	
	cout << "lines copied =" << lines << endl;
	//close first file
	copy.close();
	//write to second file
	paste << output;
	//close sec. file
	paste.close();

	cout << "done" << endl;

		return 0;
	}
