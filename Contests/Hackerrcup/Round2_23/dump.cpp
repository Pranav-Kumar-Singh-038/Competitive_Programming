#include <iostream>
#include <vector>

using namespace std;

bool isValidMove(vector<string>& board, int r, int c, int R, int C) {
    return r >= 0 && r < R && c >= 0 && c < C && board[r][c] == '.';
}

string canCaptureWhiteStones(vector<string>& board, int R, int C) {
    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            if (board[r][c] == '.') {
                if (isValidMove(board, r - 1, c, R, C) &&
                    isValidMove(board, r + 1, c, R, C) &&
                    isValidMove(board, r, c - 1, R, C) &&
                    isValidMove(board, r, c + 1, R, C)) {
                    return "YES";  // Black can capture white stones
                }
            }
        }
    }
    return "NO";  // Black cannot capture any white stones
}

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int R, C;
        cin >> R >> C;
        vector<string> board(R);
        for (int i = 0; i < R; ++i) {
            cin >> board[i];
        }

        string result = canCaptureWhiteStones(board, R, C);
        cout << "Case #" << caseNum << ": " << result << endl;
    }

    return 0;
}
