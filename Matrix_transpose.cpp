#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//enum{row = 100,col = 100};
int main(int argc, char **argv) {
	for (int ReadRow = 0, ReadCol = 0; cin >> ReadRow >> ReadCol;) {
		vector<vector<int> > matrix(ReadRow, vector<int>(ReadCol, 0));

		for (int i = 0; i < ReadRow; i++) {
			for (vector<int>::iterator iter = matrix[i].begin();
					iter != matrix[i].end(); iter++)
				cin >> *iter;
		}
		for (int i = 0, tmp = min(ReadRow, ReadCol); i < ReadRow * ReadCol;
				i++) {
			cout << ((ReadRow < ReadCol)?matrix[i % tmp][i / tmp]: matrix[i / tmp][i % tmp])
					<< ((i + 1) % ReadRow ? ' ' : '\n');
		}
	}
}
