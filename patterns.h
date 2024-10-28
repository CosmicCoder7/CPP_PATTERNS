#ifndef PATTERNS_H
#define PATTERNS_H

#include <iostream>
using namespace std;

void SolidRectangle() {
	int row, column;
	cin >> row >> column;
	for(int i=0; i<row; ++i) {
		for(int j=0; j<column; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
}

void Square() {
	int rowxcol;
	cin >> rowxcol;
	for(int i=0; i<rowxcol; ++i) {
		for(int j=0; j<rowxcol; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
}

void HollowRectangle() {
	int row, col;
	cin >> row >> col;
	for(int i=0; i<row; ++i) {
		if((i==0)||(i==row-1)) {
			for(int j=0; j<col; ++j) {
				cout << "* ";
			} 
		} else {
			cout << "* ";
			for(int i=0; i<col-2; ++i)
			   cout << "  ";	
			cout << "* ";
		}
		cout << endl;
	}
}

void HalfPyramid() {
	int rowxcol;
	cin >> rowxcol;
	for(int i=0; i<rowxcol; ++i) {
		for(int j=0; j<i+1; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
}

void InvertedHalfPyramid() {
	int rowxcol;
	cin >> rowxcol;
	for(int i=0; i<rowxcol; ++i) {
		for(int j=0; j<rowxcol-i; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
}

void NumericHalfPyramid() {
	int rowxcol;
	cin >> rowxcol;
	for(int i=0; i<rowxcol; ++i) {
		for(int j=0; j<i+1; ++j) {
			cout << j+1 << " ";
		}
		cout << endl;
	}
}

void NumericInvertedPyramid() {
	int rowxcol;
	cin >> rowxcol;
	for(int i=0; i<rowxcol; ++i) {
		for(int j=0; j<rowxcol-i; ++j) {
			cout << j+1 << " ";
		}
		cout << endl;
	}
}

void Pyramid() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n-i-1; ++j) {
			cout << " ";
		}	
		for(int j=0; j<i+1; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
}

void InvertedPyramid() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<i; ++j) {
			cout << " ";
		}
		for(int j=0; j<n-i; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
}

void SolidDiamond() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n-i-1; ++j) {
			cout << " ";
		}	
		for(int j=0; j<i+1; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<i; ++j) {
			cout << " ";
		}
		for(int j=0; j<n-i; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
}

void HollowSolidDiamond() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<(n-i-1); ++j) {
			cout << " ";
		}
		for(int j=0; j<(2*i+1); ++j) {
			if(j==0||j==2*i) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<i; ++j) {
			cout << " ";
		}
		for(int j=0; j<(2*n-2*i-1); ++j) {
			if(j==0||j==(2*n-2*i-2)) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}

void FlipedSolidDiamond() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n-i; ++j) {
			cout << "*";
		}
		for(int j=0; j<(2*i+1); ++j) {
			cout << " ";
		}
		for(int j=0; j<n-i; ++j) {
			cout << "*";
		}
		cout << endl;
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<i+1; ++j) {
			cout << "*";
		}
		for(int j=0; j<(2*n-2*i-1); ++j) {
			cout << " ";
		}
		for(int j=0; j<i+1; ++j) {
			cout << "*";
		}
		cout << endl;
	}
}

void FancyPattern() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<i+1; ++j) {
			cout << i+1;
			if(j!=i) cout << "*";
		}
		cout << endl;
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n-i; ++j) {
			cout << n-i;
			if(j!=(n-i-1)) cout << "*";
		}
		cout << endl;
	}
}

void AlphabetPalindromePyramid() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		int j=0;
		for(; j<i+1; ++j) {
			int ans=j+1;
			char ch=ans+'A'-1;
			cout << ch;
		}
		/*
		   prints 11
		   prints 122
		   prints 1233
		*/
		--j;
		/*
		   prints 1
		   prints 12
		   prints 123
		*/
		for(; j>=1; --j) {
			int ans=j;
			char ch=ans+'A'-1;
			cout << ch;
		}
		cout << endl;
	}
}

void NumericHollowHalfPyramid() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<i+1; ++j) {
			if(i==n-1||j==0||j==i) cout << j+1;
			else cout << " ";
		}
		cout << endl;
	}
}

void NumericHollowInvertedHalfPyramid() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=i+1; j<n+1; ++j) {
			if(i==0||j==i+1||j==n) cout << j;
			else cout << " ";
		}
		cout << endl;
	}
}

void NumericPalindromeEquliateralPyramid() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n-i-1; ++j) {cout << " ";}
		for(int j=0; j<i+1; ++j) {cout << i+j+1;}
		int start=2*i;
		for(int j=0; j<i; ++j) {cout << start; --start;}
		cout << endl;
	}
}

void SolidHalfDiamond() {}

void FancyPattern1() {}

void FancyPattern2() {}

void FancyPattern3() {}

void FloydsTrianglePattern() {}

void PascalsTrianglePattern() {}

void ButterflyPattern() {}

#endif // PATTERNS_H
