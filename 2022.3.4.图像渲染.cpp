const int dx[4] = {1, 0, 0, -1};
const int dy[4] = {0, 1, -1, 0};

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int newColor, int* returnSize, int** returnColumnSizes) {
    int n = imageSize, m = imageColSize[0];
    *returnSize = n;
    for (int i = 0; i < n; i++) {
        (*returnColumnSizes)[i] = m;
    }
    int currColor = image[sr][sc];
    if (currColor == newColor) return image;
    int que[n * m][2];
    int l = 0, r = 0;
    que[r][0] = sr, que[r++][1] = sc;
    image[sr][sc] = newColor;
    while (l < r) {
        int x = que[l][0], y = que[l++][1];
        for (int i = 0; i < 4; i++) {
            int mx = x + dx[i], my = y + dy[i];
            if (mx >= 0 && mx < n && my >= 0 && my < m && image[mx][my] == currColor) {
                que[r][0] = mx, que[r++][1] = my;
                image[mx][my] = newColor;
            }
        }
    }
    return image;
}

