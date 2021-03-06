/**
 * \mainpage
 *
 * Welcome to the zip library.
 *
 * ## Introduction
 *
 * The libzip library is a good C library for opening and creating zip archives, this wrapper provides safe C++ classes
 * around this great library.
 * 
 * The benefits:
 * 
 *   - Automatic allocations and destructions (RAII),
 *   - Easy way to add files,
 *   - Easy API,
 *   - Easy file reading in archive,
 *   - Convenience, thanks to C++ function overloads.
 * 
 * ## Requirements
 * 
 *   - [libzip](http://www.nih.at/libzip),
 *   - C++14.
 * 
 * ## Installation
 *
 * Just copy the file zip.hpp and add it to your project.
 *
 * ## Overview
 *
 * Very simple extraction of a file.
 * 
 * ````cpp
 * #include <iostream>
 *
 * #include "zip.hpp"
 *
 * try {
 *  libzip::Archive archive("mydata.zip");
 *  libzip::Stat stat = archive.stat("README");
 *  libzip::File file = archive.open("README");
 * 
 *  std::cout << "content of README:" << std::endl;
 *  std::cout << file.read(stat.size);
 * } catch (const std::exception &ex) {
 *  std::cerr << ex.what() << std::endl;
 * }
 * ````
 */
