// F23CS660hw1q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//References: https://www.geeksforgeeks.org/find-maximum-path-sum-in-a-binary-tree/
//https://leetcode.com/problems/binary-tree-maximum-path-sum/

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

struct vertex
{
    int number;
	struct vertex *left, *right;
};

struct vertex* newVertex(int number)
{
    struct vertex* newVertex = new vertex;
    newVertex->number = number;
    newVertex->left = newVertex->right = NULL;
    return (newVertex);
}

// This function returns overall maximum path sum in 'res'
// And returns max path sum going through root.
int MaxSumPath(vertex* v)
{
    // Base Case
    if (v == NULL)
        return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
