with import <nixpkgs> {};

pkgs.mkShell {
  buildInputs = [
    gcc binutils ncurses cmake ninja
  ];
}
