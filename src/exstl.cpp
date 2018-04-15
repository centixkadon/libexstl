
#include "exstl.hpp"

namespace std {

thread_ostream tout(cout);
thread_endl_type tendl(tout.endl());

namespace chrono {

tick_diff::tick_diff(string const & str) : _str(str), _tick(high_resolution_clock::now()), _diff(0.0) {
  _str = _str.substr(0, tick_diff_length);
  _str += string(tick_diff_length - _str.size(), ' ') + ": ";
}

string tick_diff::diff() {
  _diff = duration_cast<duration<double>>(high_resolution_clock::now() - _tick).count();
  stringstream ss;
  ss << _str << _diff;
  return ss.str();
}

size_t tick_diff::tick_diff_length = 10;

} // namespace chrono

} // namespace std
