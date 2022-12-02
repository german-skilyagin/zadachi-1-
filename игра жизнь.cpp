#include <iostream>

using namespace std;

class Universe {
    static int torus(int val, int size) {
        if (val < 0)
            return size + val % size;
        if (val >= size)
            return val % size;
        return val;
    }
public:
    Universe(int width, int height) : sx(width), sy(height) {
        cells = new char[sx * sy];
        memset(cells, '.', sx * sy);
    }
    Universe(const Universe& u) : sx(u.sx), sy(u.sy) {
        cells = new char[sx * sy];
        memcpy(cells, u.cells, sx * sy);
    }
    Universe(Universe&& u) noexcept : sx(u.sx), sy(u.sy) {
        cells = u.cells;
        u.cells = nullptr;
        u.sx = u.sy = 0;
    }
    ~Universe() {
        if (cells != nullptr)
            delete[] cells;
    }
    Universe& operator =(const Universe& u) {
        if (this == &u)
            return *this;
        if (cells != nullptr)
            delete[] cells;
        sx = u.sx;
        sy = u.sy;
        cells = new char[sx * sy];
        memcpy(cells, u.cells, sx * sy);
        return *this;
    }
    Universe& operator =(Universe&& u) noexcept {
        if (this == &u)
            return *this;
        if (cells != nullptr)
            delete[] cells;
        sx = u.sx;
        sy = u.sy;
        cells = u.cells;
        u.cells = nullptr;
        u.sx = u.sy = 0;
        return *this;
    }
    char& at(int x, int y) {
        x = torus(x, sx);
        y = torus(y, sy);
        return *(cells + y * sx + x);
    }
    char at(int x, int y) const {
        x = torus(x, sx);
        y = torus(y, sy);
        return *(cells + y * sx + x);
    }
    int width() const { return sx; }
    int height() const { return sy; }
    friend ostream& operator <<(ostream& os, const Universe& u) {
        for (int y = 0; y < u.sy; ++y) {
            for (int x = 0; x < u.sx; ++x)
                os << u.at(x, y);
            os << endl;
        }
        return os;
    }
    friend istream& operator >>(istream& is, Universe& u) {
        for (int y = 0; y < u.sy; ++y) {
            for (int x = 0; x < u.sx; ++x)
                is >> u.at(x, y);
            is.ignore();
        }
        return is;
    }
private:
    int sx, sy;
    char* cells;
};

int neighbours(const Universe& u, int x, int y) {
    int result = 0;
    for (int dy = -1; dy <= 1; ++dy)
        for (int dx = -1; dx <= 1; ++dx)
            if (dx == 0 && dy == 0)
                continue;
            else if (u.at(x + dx, y + dy) == '*')
                ++result;
    return result;
}

void  Live_Is_Life(const Universe& from, Universe& to) {
    int sx = from.width();
    int sy = from.height();
    int nb;
    for (int y = 0; y < sy; ++y)
        for (int x = 0; x < sx; ++x) {
            nb = neighbours(from, x, y);
            if (from.at(x, y) == '.' && nb == 3)
                to.at(x, y) = '*';
            else if (from.at(x, y) == '*' && (nb < 2 || nb > 3))
                to.at(x, y) = '.';
            else
                to.at(x, y) = from.at(x, y);
        }
}

int main()
{
    int x, y, gen;
    cin >> x >> y >> gen;

    Universe u0(x, y), u1(x, y);
    cin >> u0;

    for (int i = 0; i < gen; ++i) {
        Live_Is_Life(u0, u1);
        swap(u0, u1);
    }
    cout << endl << u0 << endl;
    return 0;
}