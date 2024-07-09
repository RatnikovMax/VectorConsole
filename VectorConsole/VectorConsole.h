#pragma once
#include <cmath>
#include <iostream>

class Vector
{
public:
    Vector() = default;
    Vector(float x, float y, float z) : mX(x), mY(y), mZ(z) {}

    Vector operator+(const Vector& vec) const
    {
        return Vector(mX + vec.mX, mY + vec.mY, mZ + vec.mZ);
    }

    Vector operator-(const Vector& vec) const
    {
        return Vector(mX - vec.mX, mY - vec.mY, mZ - vec.mZ);
    }

    friend Vector operator*(const Vector& v, int number)
    {
        return Vector(v.mX * number, v.mY * number, v.mZ * number);
    }

    friend Vector operator*(int number, const Vector& v)
    {
        return v * number;
    }

    Vector& operator=(const Vector& vec) = default;

    float length() const
    {
        return std::sqrt(mX * mX + mY * mY + mZ * mZ);
    }

    Vector normalization() const
    {
        return Vector(mX / length(), mY / length(), mZ / length());
    }

    float scale(const Vector& vec) const
    {
        return mX * vec.mX + mY * vec.mY + mZ * vec.mZ;
    }

    float baziz() const {
        return mX * 1 + mY * 1 + mZ * 1;
    }
    ~Vector() {};

    friend std::ostream& operator<<(std::ostream& os, const Vector& vec)
    {
        os << "{" << vec.mX << ", " << vec.mY << ", " << vec.mZ << "}";
        return os;
    }


private:
    float mX{};
    float mY{};
    float mZ{};
};



