#include <iostream>

class String { // Simplified string class
    char * m_date; // Pointer to character data
    uint16_t m_size; // Size of the string

public:
    String(const char * date) { // Constructor
        std::cout << "Created\n"; 
        m_size = strlen(string); // Calculate size
        m_data = new char[m_size];      // Allocate memory
        memcpy(m_data, string, m_size); // Copy data
    }
    ~String() { // Destructor
        std::cout << "Destroyed\n";
        delete[] m_data; // Free allocated memory
    }
};

class Something { // mimics a class with a String member
private:
    String m_name; // Member of type String
public:
    Something(const char * name) : m_name(name) {} 
};

int main() {
    Something something("this in s avery long string")
    return 0;
}