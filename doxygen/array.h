/**
 * @file array.h
 * @author Kiran Kadariya
 * @brief Declaration of the Array class
 * @date 01-27-2025
 * @version 1.0
 */

#ifndef ARRAY_H
#define ARRAY_H

/**
 * @class Array
 * @brief A class representing a dynamic array
 */
class Array {
public:
    /**
     * @brief Default constructor
     * @post Creates an empty array
     */
    Array();

    /**
     * @brief Destructor
     * @post Releases allocated memory
     */
    ~Array();

    /**
     * @brief Gets the size of the array
     * @return int The size of the array
     */
    int size() const;
};
#endif
