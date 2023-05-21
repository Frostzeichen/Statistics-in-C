{ pkgs }: {
	deps = [
		pkgs.python39Packages.jupyterlab
  pkgs.python39Packages.jupyter_core
  pkgs.python39Packages.pip
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}