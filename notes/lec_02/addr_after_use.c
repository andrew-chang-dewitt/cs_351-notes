str my_fn() {
  i = 1;

  printf('%', &i);
}

void main(void) {
  my_fn();

  // ...
  // prompt user for an address (they should enter the one rendered by my_fn)
  // str addr = ...

  printf(*addr);
}