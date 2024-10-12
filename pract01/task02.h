#pragma once
// https://leetcode.com/problems/jewels-and-stones/description/?fbclid=IwZXh0bgNhZW0CMTEAAR3SN9AhD4-rjbWUJFrszohCxj-tnBVQYb3ZHs7vAIalUpurrw949b1NIgM_aem_TjgNybsvJMudsZwmdB7VFw
// O(n^2) solution
 /*  For each character in the jewels string, find the number of times the character appears in the stones string.
 */

#include <iostream>
#include <string>
class Solution02
{
public:
	int numJewelsInStones(std::string jewels, std::string stones)
	{
		int numOfJewels = 0;
		for (int i = 0; i < jewels.length(); i++)
		{
			char jewel = jewels[i];
			for (int j = 0; j < stones.length(); j++)
			{
				if (jewel==stones[j])
				{
					numOfJewels++;
				}
			}
		}
		return numOfJewels;
	}
};

// O(n) solution
 /*  We can use an array to store the jewels.
 *  For each character in the stones string, we can check if the character is a jewel in O(1) time.
*/
 /*This solution is better than the previous one because :
	1. It has a time complexity of O(n) instead of O(n^2).
	2. If the chars in jewels are not unique, the above solution will break.
 */

class Solution02
{
public:
	int convertLetterToNum(char ch)
	{
		if (ch>='A'&&ch<='Z')
		{
			return ch - 'A';
		}

		return ch - 'a' + 26;//because we have the 26 UPPER letters and now we need an offset of 26 before the LOWER letters
	}

	int numJewelsInStones(std::string jewels, std::string stones)
	{
		bool isJewelByLetter[26 * 2] = { false };
		for (int i = 0; i < jewels.length(); i++)
		{
			int letterToNum = convertLetterToNum(jewels[i]);
			isJewelByLetter[letterToNum] = true;
		}

		int numJewels = 0;
		for (int i = 0; i < stones.length(); i++)
		{
			int letterToNum = convertLetterToNum(stones[i]);
			bool isJewel = isJewelByLetter[letterToNum];
			if (isJewel)
			{
				numJewels++;
			}
		}
		return numJewels;
	}
};