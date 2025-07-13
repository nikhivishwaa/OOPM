// promise example
#include <iostream>       // std::cout
#include <functional>     // std::ref
#include <thread>         // std::thread
#include <future>         // std::promise, std::future
using namespace std;

void print_int (future<int>& fut) {
  int x = fut.get();
  cout << "value: " << x << endl;
}

int main ()
{
  promise<int> prom1;                      // create promise
  promise<int> prom2;                      // create promise
  promise<int> prom3;                      // create promise

  future<int> fut1 = prom1.get_future();    // engagement with future
  future<int> fut2 = prom2.get_future();    // engagement with future
  future<int> fut3 = prom3.get_future();    // engagement with future

  thread th1 (print_int, ref(fut1));  // send future to new thread
  thread th2 (print_int, ref(fut2));  // send future to new thread
  thread th3 (print_int, ref(fut3));  // send future to new thread

  prom1.set_value (10);                         // fulfill promise
  prom3.set_value (50);                         // fulfill promise
  prom2.set_value (90);                         // fulfill promise
                                               // (synchronizes with getting the future)
  th1.join();
  th2.join();
  th3.join();
  return 0;
}