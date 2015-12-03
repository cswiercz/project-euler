#include <iostream>
#include <exception>

/*
  sum(n)

  Computes the sum of all multiples of three or five which are less than n.
*/
unsigned sum(unsigned n)
{
  unsigned value = 0;
  unsigned i;
  for(i=0; i<n; ++i)
    if (not ((i % 3) and (i % 5)))
        value += i;
  return value;
}

void tests(void)
{
  unsigned ans = sum(10);
  bool pass = (ans == 23);

  if (not pass)
    throw std::runtime_error("Test fails: " + std::to_string(ans) +
                             " is not equal to 23.");

  std::cout << "Tests pass." << std::endl;
}

void answer(void)
{
  unsigned ans = sum(1000);
  std::cout << "Answer: " << ans << std::endl;
}


int main(void)
{
  std::cout << "===== Project Euler #001 =====" << std::endl;

  tests();
  answer();

  std::cout << "=========== DONE =============" << std::endl;
  return 0;
}
