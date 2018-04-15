
#include <exstl.hpp>

using namespace std;

void thread_push(thread_list<size_t> & p) {
  for (size_t i = 0; i < 10; ++i) {
    p.push_back(i);
  }
  p.push_back(-1);
}

void thread_pop(thread_list<size_t> & p) {
  while (true) {
    size_t i = p.front();
    p.pop_front();
    if (i == (size_t)-1) break;
    cout << i << endl;
  }
}

int main() {
  cout << "exstl test" << endl;

  cout << vector<vector<int>>{ { 1, 2, 3, 5 }, { 7, 11 }, {} } << endl;

  thread_list<size_t> p;
  thread th1(thread_push, ref(p)), th2(thread_pop, ref(p));
  th1.join();
  th2.join();

  return 0;
}
