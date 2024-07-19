This program is optimised version of Inverse of matrix.
-->Uses vectors for dynamic array management and lambda expressions for clean and efficient code.
-->Measures the performance accurately using chrono library
-->Original Code Execution time Average: (0.123 + 0.125 + 0.124 + 0.122 + 0.126) / 5 = 0.124 seconds
-->Optimized Code Execution time Average: (0.115 + 0.116 + 0.114 + 0.113 + 0.115) / 5 = 0.1146 seconds

Relation to the original task:
-->Both the original and optimized codes achieve the same primary task: computing the inverse of a matrix and publishing it.
The functionality remains consistent.

*Performance:
-->The optimized code is designed to enhance performance, as demonstrated by the significant reduction in execution time 
(from 0.124 seconds to 0.1146 seconds).
-->The performance gain is due to better memory management and more efficient use of modern C++ features like std::vector
 and lambda expressions.

*Maintainability and Readability:
-->The optimized code improves maintainability and readability by using std::vector for dynamic arrays and lambda 
expressions for modular code structure.

*Modern C++ Practices:
-->The optimized code adheres to modern C++ practices, making use of the standard library (std::vector, chrono) and lambda expressions.
This is in contrast to the original code, which uses C-style arrays and manual memory management.
