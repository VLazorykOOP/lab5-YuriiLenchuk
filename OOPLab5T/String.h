#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class String {
protected:
    char* m_buffer;
    size_t m_size;

public:
    String() : m_buffer(nullptr), m_size(0) {}

    String(const char* str) : m_buffer(nullptr), m_size(0) {
        if (str != nullptr) {
            m_size = strlen(str);
            m_buffer = new char[m_size + 1];
            strncpy(m_buffer, str, m_size + 1);
        }
    }

    String(const String& other) : m_buffer(nullptr), m_size(0) {
        if (other.m_buffer != nullptr) {
            m_size = other.m_size;
            m_buffer = new char[m_size + 1];
            strncpy(m_buffer, other.m_buffer, m_size + 1);
        }
    }

    virtual ~String() {
        delete[] m_buffer;
    }

    friend ostream& operator<<(ostream& os, const String& str) {
        os << str.m_buffer;
        return os;
    }

    friend istream& operator>>(istream& is, String& str) {
        char buffer[1024];
        is >> buffer;
        str = String(buffer);
        return is;
    }

    String& operator=(const String& other) {
        if (this != &other) {
            delete[] m_buffer;
            m_size = other.m_size;
            m_buffer = new char[m_size + 1];
            strncpy(m_buffer, other.m_buffer, m_size + 1);
        }
        return *this;
    }
};

class DigitString : public String {
public:
    DigitString() : String() {}

    DigitString(const char* str) : String() {
        if (str != nullptr) {
            m_size = strlen(str);
            m_buffer = new char[m_size + 1];
            strncpy(m_buffer, str, m_size + 1);
            if (!isDigitString()) {
                delete[] m_buffer;
                m_buffer = nullptr;
                m_size = 0;
            }
        }
    }

    DigitString(const DigitString& other) : String(other) {}

    virtual ~DigitString() {}

    bool isDigitString() const {
        for (size_t i = 0; i < m_size; i++) {
            if (!isdigit(m_buffer[i])) {
                return false;
            }
        }
        return true;
    }

    DigitString& operator=(const DigitString& other) {
        if (this != &other) {
            String::operator=(other);
            if (!isDigitString()) {
                delete[] m_buffer;
                m_buffer = nullptr;
                m_size = 0;
            }
        }
        return *this;
    }
};