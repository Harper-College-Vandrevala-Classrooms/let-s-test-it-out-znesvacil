//
//  main.cpp
//  Let's Test It Out
//
//  Created by Zachary Nesvacil on 10/20/24.
//

#include <iostream>
#include <string>
#include "catch_amalgamated.hpp"

using namespace std;

string fizzbuzz(int n)
{
  if (n % 3 == 0 && n % 5 == 0)
  {
    return "FizzBuzz";
  }
  else if (n % 3 == 0)
  {
    return "Fizz";
  }
  else if (n % 5 == 0)
  {
    return "Buzz";
  }
  else
  {
    return std::to_string(n);
  }
}

TEST_CASE( "Fizzbuzz is computed", "[fizzbuzz]" ) {
    REQUIRE( fizzbuzz(0) == "FizzBuzz" );
    REQUIRE( fizzbuzz(1) == "1" );
    REQUIRE( fizzbuzz(-1) == "-1" );
    REQUIRE( fizzbuzz(3) == "Fizz" );
    REQUIRE( fizzbuzz(5) == "Buzz" );
    REQUIRE( fizzbuzz(15) == "FizzBuzz" );
}

int main() {
    // insert code here...
    
    
    
    std::cout << fizzbuzz(0);
    return 0;
}
