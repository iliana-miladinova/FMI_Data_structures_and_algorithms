#pragma once
#include <iostream>
#include <string>
//https://leetcode.com/problems/permutation-difference-between-two-strings/description/?fbclid=IwZXh0bgNhZW0CMTEAAR0b8EZjz1lC0NZ9e1AwSoMI6Jpr6wsUSrJWxfa01O5Bs-TDEUrtOv4o28E_aem_5z9ppXTeEKw5scnwfDIMVg

// O(n^2) solution
 /*  For each character in the first string, find the index of the same character in the second string.
 *  Calculate the difference between the two indexes.
 *  We are using abs, because the difference can be negative.
 */

class Solution01
{
public:
	int findPermutationDifference(std::string s, std::string t)
	{
		int permutations = 0;
		for (int i = 0; i < s.length(); i++)
		{
			char searched = s[i];
			for (int j = 0; j < t.length(); j++)
			{
				if (searched==t[i])
				{
					permutations += abs(j - i);
					break;
				}
			}
		}
		return permutations;
	}
};

// O(n) solution
/*  We can use an array to store the indexes of the characters in the first string, because we know the number of characters is limited to 26.
 *  For each character in the second string, we can find the index of the same character in the first string in O(1) time.
 *  We can calculate the difference between the two indexes.
 */

class Solution01
{
public:
	int findPermutationDifference(std::string s, std::string t)
	{
		int possitionsInSbyLetters[26];
		for (int i = 0; i < s.length(); i++)
		{
			int letterToNum = s[i] - 'a';

			possitionsInSbyLetters[letterToNum] = i;
		}

		int permutations = 0;
		for (int i = 0; i < t.length(); i++)
		{
			int letterToNum = t[i] - 'a';
			int possitionInS = possitionsInSbyLetters[letterToNum];

			permutations += abs(possitionInS - i);
		}
		return permutations;
	}
};