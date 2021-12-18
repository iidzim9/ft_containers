/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 18:06:38 by iidzim            #+#    #+#             */
/*   Updated: 2021/12/18 23:46:18 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "vector/vector.hpp"
#include "tools/iterator.hpp"
# include "tools/tools.hpp"

#include <iterator>
#include <ctime>
#include <iomanip>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>

// int main(void){

// 	ft::vector<int> first1;                                // empty vector of ints
// 	ft::vector<int> second1(3, 100);                       // four ints with value 100
// 	std::cout << second1.size() << " - " << second1.capacity() << std::endl;
// 	for (int i = 0; i < second1.size(); i++)
// 		std::cout << second1[i] << " ";
// 	std::cout << std::endl;
// 	ft::vector<int> third(second1);
// 	std::cout << "copy constructor -> ";
// 	for (int i = 0; i < third.size(); i++)
// 		std::cout << third[i] << " ";
// 	std::cout << std::endl;
// 	// third.reserve(10);
// 	// std::cout << "assignment operator -> ";
// 	// first1 = third;
// 	// for (int i = 0; i < first1.size(); i++)
// 	// 	std::cout << first1[i] << " ";
// 	ft::vector<int> third1(second1.begin(),second1.end());   // iterating through second
// 	// ft::vector<int> fourth (third);                       // a copy of third
// 	// the iterator constructor can also be used to construct from arrays:
// 	// ft::vector<int> fifth1 (myints, myints + sizeof(myints) / sizeof(int) );
// 	// std::cout << "The contents of fifth are:";
// 	// for (ft::vector<int>::iterator it = fifth1.begin(); it != fifth1.end(); ++it)
// 		// std::cout << ' ' << *it;
// 	// std::cout << '\n';

// 	return 0;
// }


// // ****************************

// // #include <iostream>
// // #include <type_traits>

// // // 1. the return type (bool) is only valid if T is an integral type:
// // template <typename T>
// // typename std::enable_if<std::is_integral<T>::value,bool>::type
// //   is_odd (T i) {return bool(i%2);}

// // // 2. the second template argument is only valid if T is an integral type:
// // template < class T,
// //            class = typename std::enable_if<std::is_integral<T>::value>::type>
// // bool is_even (T i) {return !bool(i%2);}

// // int main() {

// //   short int i = 1;    // code does not compile if type of i is not integral

// //   std::cout << std::boolalpha;
// //   std::cout << "i is odd: " << is_odd(i) << std::endl;
// //   std::cout << "i is even: " << is_even(i) << std::endl;

// //   return 0;
// // }

// // #include <iostream>
// // #include <type_traits>

// // int main() {
// //   std::cout << std::boolalpha;
// //   std::cout << "is_integral:" << std::endl;
// //   std::cout << "char: " << ft::is_integral<char>::value << std::endl;
// //   std::cout << "int: " << ft::is_integral<int>::value << std::endl;
// //   std::cout << "float: " << ft::is_integral<float>::value << std::endl;
// //   return 0;
// // }


int main()
{
// 	// ft::vector<int> test(5, 5);
// 	// ft::vector<int>::const_iterator itc = test.begin();

// 	// if (itc != test.end())
// 	//     std::cout<<"ls "<<std::endl;
// 	// //std::cout<<*itc<<std::endl;
// 	ft::vector<int> first;                                
// 	ft::vector<int> second (4,100);                       
// 	ft::vector<int> third (second.begin(),second.end());
// 	ft::vector<int> fourth (third);                      
// 	int myints[] = {16,2,77,29};
// 	ft::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );	
// 	std::cout << "The contents of fifth are:";
// 	for (ft::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)		std::cout << ' ' << *it;
// 	std::cout << '\n';	ft::vector<int> data(5, 15);
 
    // ft::vector<int>::iterator    en = data.end();

    // std::cout << "my iterator - begin " << *be << std::endl;
    // std::cout << "my iterator - end " << *(--en) << std::endl;
    // std::cout << "index[15] = " << data[15] << std::endl;
    // std::cout << "capacity = " << data.capacity() << " - size = " << data.size() << std::endl;

    // std::cout << "***********************************\n";

    // std::vector<int> data1(10, 5);

    // std::vector<int>::iterator    be1 = data1.begin();
    // std::vector<int>::iterator    en1 = data1.end();

    // std::cout << "std iterator - begin " << *be1 << std::endl;
    // std::cout << "std iterator - end " << *(--en1) << std::endl;
    // std::cout << "index[15] = " << data1[15] << std::endl;
    // std::cout << "capacity = " << data1.capacity() << " - size = " << data1.size() << std::endl;
    
    // ft::vector<int>    it(be, en);
    // std::cout << it.size() << std::endl;
    // std::cout << *it.begin() << " - " << *(it.end()) << std::endl;

//*********************************************************************************
   
    ft::vector<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    d.push_back(7);
    d.push_back(8);

    std::cout << d.size() << " - " << d.capacity() << std::endl;
    d.insert(d.begin()+4, 10, 99);
    for (size_t j=0; j<d.size(); j++)
        std::cout << d[j] << " ";
    std::cout << std::endl;
    std::cout << d.size() << " - " << d.capacity() << std::endl;

//*********************************************************************************

    std::cout << "******************\n";
    
    std::vector<int> d1;
    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);
    d1.push_back(4);
    d1.push_back(5);
    d1.push_back(6);
    d1.push_back(7);
    d1.push_back(8);

    std::cout << d1.size() << " - " << d1.capacity() << std::endl;
    d1.insert(d1.begin()+4, 10, 99);
    for (size_t j=0; j<d1.size(); j++)
        std::cout << d1[j] << " ";
    std::cout << std::endl;
    std::cout << d1.size() << " - " << d1.capacity() << std::endl;

    // std::cout << d1.size() << " - " << d1.capacity() << std::endl;
    // d1.insert(d1.begin()+1, 2);
    // for (size_t i=0; i<d1.size(); i++)
    //     std::cout << d1[i] << " ";
    // std::cout << std::endl;
    // std::cout << *be << std::endl;
    // std::cout << data.size() << " - " << data.capacity() << std::endl;
    // data.insert(be, 999);
    // for (size_t i=0; i<data.size(); i++)
    //     std::cout << data[i] << " ";
    // std::cout << std::endl;
    // std::cout << data.size() << " - " << data.capacity() << std::endl;

    // std::cout << "*********************\n";
    // std::cout << "std insert\n";

    // std::vector<int> d2;
    // d2.push_back(1);
    // d2.push_back(5);
    // d2.push_back(6);
    // std::cout << d2.size() << " - " << d2.capacity() << std::endl;
    // // d2.insert(d2.begin()+1, 2);
    // d2.insert(d2.begin()+1, 3, 2);
    // for (size_t j=0; j<d2.size(); j++)
    //     std::cout << d2[j] << " ";
    // std::cout << std::endl;
    // std::cout << d2.size() << " - " << d2.capacity() << std::endl;

    // std::vector<int> data1(20, 5);
    // std::vector<int>::iterator    be1 = data1.begin();
    // be1 += 3;
    // // std::cout << *be1 << std::endl;
    // std::cout << data1.size() << " - " << data1.capacity() << std::endl;
    // data1.insert(be1, 999);
    // for (size_t i=0; i<data1.size(); i++)
    //     std::cout << data1[i] << " ";
    // std::cout << std::endl;
    // std::cout << data1.size() << " - " << data1.capacity() << std::endl;

//*********************************************************************************

	return 0;
}
