template<typename T> class A {
public:       
  template<typename T1> struct C {
    typedef A other;
  };
};
template<typename T1, typename T2> class B {
  typedef typename T2::template C<int>::other type;
};
class B<char, A<char> >;
