class Wektor2D
{
    


    public:
         Wektor2D()
    {
        x = 0.;
        y = 0.;

    }
        Wektor2D(double a, double b)
    {
        x = a;
        y = b;

    }
    Wektor2D operator+(const Wektor2D& other) const {
        return Wektor2D(x + other.x, y + other.y);
    }
    double operator*(const Wektor2D& other) const {
        return x * other.x + y * other.y;
    }

    void setX(double X){x=X;}
    void setY(double Y){y=Y;}

    double getX(){return x;}
    double getY(){return y;}
    
    private:
    double x;
    double y;

};
