template <typename T1, typename T2 = int> struct A {
  void bar(T2 p);
};
void foo() {
  A<int> a;
}
