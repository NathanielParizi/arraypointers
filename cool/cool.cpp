/*
 * cool.cpp
 *
 *  Created on: Jul 21, 2018
 *      Author: Nathaniel Parizi
 */

#include <iostream>

using namespace std;

int main() {

	string texts[] = { "cat", "dog", "mouse" };

	string *pTexts = texts;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {

		cout << pTexts[i] << " " << flush;

	}

// give the actual value in the address that the pointer points to
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {

		cout << *pTexts << " " << endl;

		pTexts++;

	}

	cout << endl;

	string *pElements = &texts[0];
	string *pEnd = &texts[sizeof(texts) / sizeof(string) - 1];

	while (true) {
		cout << *pElements << " " << flush;

		if (pElements == pEnd) {
			break;
		}
		pElements++;
	}

	cout << sizeof(texts) / sizeof(string) << endl;

	return 0;
}

