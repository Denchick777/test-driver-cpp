// Author : Astakhov Alexey
// Incorrect usage with functions. E0299

#include "stdafx.h"
#include <iostream>

using namespace std;

int func() {
	return 0;
}
int func(int a) {
	return 0;
}

int main() {

	decltype(func) var1;

	return 0;
}