// Copyright 2010 Christophe Henry
// henry UNDERSCORE christophe AT hotmail DOT com
// This is an extended version of the state machine available in the boost::mpl library
// Distributed under the same license as the original.
// Copyright for the original version:
// Copyright 2005 David Abrahams and Aleksey Gurtovoy. Distributed
// under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <iostream>
// back-end
#include <ecto/atomic.hpp>


ecto::atomic<int> ai;


void inc() {
  while (true) {
    ecto::atomic<int>::scoped_lock l(ai);
    l.value += 1;
  }
}

void dec() {
  while (true) {
    ecto::atomic<int>::scoped_lock l(ai);
    l.value += 1;
  }
}

int main()
{

    return 0;
}
