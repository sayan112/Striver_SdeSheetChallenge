void ratallways(vector<vector<int>> &maze, string need, int row, int col, vector<string> &ans)
{
    if (row < 0 || col < 0 || row >= maze.size() || col >= maze.size() || maze[row][col] == 0)
    {
        return;
    }
    if (row == maze.size() - 1 && col == maze[0].size() - 1)
    {
        ans.push_back(need);
        return;
    }
    maze[row][col] = 0;
    ratallways(maze, need + 'D', row + 1, col, ans);
    ratallways(maze, need + 'L', row, col - 1, ans);
    ratallways(maze, need + 'R', row, col + 1, ans);
    ratallways(maze, need + 'U', row - 1, col, ans);
    maze[row][col] = 1;
}
vector<string> findPath(vector<vector<int>> &maze, int n)
{
    // Your code goes here
    string need = "";
    vector<string> ans;
    int row = 0;
    int col = 0;
    ratallways(maze, need, row, col, ans);
    return ans;
}
}
;