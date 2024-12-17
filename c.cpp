#include <iostream>
/*
// step 1: c.cpp    name given in this file
//2.step2: source.txt  name file create in this folder
//3. step3 : destination.text file create in this folder
//  step 4: run c.cpp file in terminal

    in terminal :  we have to write this then it will be copy from source.txt  to destination.txt file.

PS H:\OneDrive\Documents\GTK> g++ c.cpp -o c
PS H:\OneDrive\Documents\GTK> .\c source.txt destination.txt
File copied successfully from source.txt to destination.txt.
PS H:\OneDrive\Documents\GTK>





*/
#include <fstream> // For file operations
using namespace std;

int main(int argc, char *argv[])
{
    // Check if the required number of arguments is provided
    if (argc < 3)
    {
        cout << "Usage: " << argv[0] << " <source_file> <destination_file>" << endl;
        return 1;
    }

    // Retrieve the source and destination file paths from command-line arguments
    const char *sourceFile = argv[1];
    const char *destinationFile = argv[2];

    // Open the source file for reading
    ifstream source(sourceFile, ios::in);
    if (!source.is_open())
    {
        cout << "Error: Could not open source file: " << sourceFile << endl;
        return 1;
    }

    // Open the destination file for writing
    ofstream destination(destinationFile, ios::out);
    if (!destination.is_open())
    {
        cout << "Error: Could not open destination file: " << destinationFile << endl;
        source.close(); // Close the source file before exiting
        return 1;
    }

    // Read from the source file and write to the destination file
    string line;
    while (getline(source, line))
    {
        destination << line << endl;
    }

    // Close the files
    source.close();
    destination.close();

    cout << "File copied successfully from " << sourceFile << " to " << destinationFile << "." << endl;
    return 0;
}
