// F23CS660hw1q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//References: https://www.geeksforgeeks.org/find-maximum-path-sum-in-a-binary-tree/
//https://leetcode.com/problems/binary-tree-maximum-path-sum/
//https://www.geeksforgeeks.org/stdmax-in-cpp/

#include <iostream>
#include <algorithm>
using namespace std;

// A binary tree vertex
struct vertex
{
	int number;
	struct vertex *left, *right;
};

// A utility function to allocate a new vertex
struct vertex* newVertex(int number)
{
	struct vertex* newVertex = new vertex;
	newVertex->number = number;
	newVertex->left = newVertex->right = NULL;
	return (newVertex);
}

// This function returns overall maximum path sum in 'res'
// And returns max path sum going through vertex v.
int MaxSumPath(vertex* v, int& res)
{
	
	int currentRes = res;
	int currentNumber = v->number;
	int childSumPath = INT_MIN;
	int currentMax = INT_MIN;
	
	//int rootSumPath = MaxSumPath(v, res);

	// Base Case
	if (v == NULL)
		return 0;

	//Recursive Cases

	if (v->left == NULL && v->right == NULL)
	{
		//currentMax = rootSumPath;
		//currentMax = currentRes + currentNumber;

	}

	//if (v->left == NULL && v->right != NULL)
	//{		
	//	childSumPath = MaxSumPath(v->right, res);
	//	currentMax = childSumPath;
	//	//currentMax = max(childSumPath, rootSumPath);
	//}

	//if (v->left != NULL && v->right == NULL)
	//{
	//	childSumPath = MaxSumPath(v->left, res);
	//	currentMax = childSumPath;

	//	//currentMax = max(childSumPath, rootSumPath);
	//}

	//if (v->left != NULL && v->right != NULL)
	//{
	//	childSumPath = max(MaxSumPath(v->left, res), MaxSumPath(v->right, res));
	//	currentMax = childSumPath;
	//	//currentMax = max(childSumPath, rootSumPath);
	//}

	//res = (currentRes, currentMax);
}

// Returns maximum path sum in tree with given root
int findMaxSum(vertex* v)
{
	// Initialize result
	int res = INT_MIN;
	// Compute and return result
	MaxSumPath(v, res);
	return res;
}

int main()
{
//	std::cout << "Hello World!\n";
	struct vertex* v = newVertex(10);
	v->left = newVertex(2);
	v->right = newVertex(10);
	v->left->left = newVertex(20);
	v->left->right = newVertex(1);
	v->right->right = newVertex(-25);
	v->right->right->left = newVertex(3);
	v->right->right->right = newVertex(4);

	//// Function call
	cout << "Max path sum is " << findMaxSum(v);
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
