## Purpose

This repository is a small, single-file C++ example that demonstrates runtime polymorphism. The goal of this instructions file is to give an AI coding agent immediate, actionable context so edits are safe and useful.

## Quick orientation
- Primary source: `polymorphism.cpp` (root of repo). This is a compact program showing a base class `Animal` and two derived classes `Dog` and `Cat` that override `show()`.
- Behavior to preserve: `main()` constructs derived objects via `new` (`new Dog()`, `new Cat()`), calls `show()` through `Animal*` pointers, and deletes the objects. Any edits that change memory management or program flow should keep equivalent runtime behavior unless the user asks for refactor.

## Build & run (Windows / PowerShell)
Use the repository's g++ toolchain (this workspace shows `g++.exe` in tasks):

```powershell
g++ -std=c++17 -O2 -Wall -Wextra "polymorphism.cpp" -o "polymorphism.exe"
.\polymorphism.exe
```

If using an IDE (Visual Studio / Code Runner) the same compile flags are recommended. The repo currently contains no build system or CI.

## Concrete patterns and examples (from `polymorphism.cpp`)
- Virtual dispatch: `class Animal { public: virtual void show(); };` and derived overrides using `void show() override` in `Dog` and `Cat`.
- Polymorphic usage in `main`: `Animal* animal = new Dog(); animal->show();` and symmetric for `Cat`.
- Manual memory management: `new` + `delete` used directly—edits should preserve object lifetime and deletion unless explicitly refactoring to smart pointers.
- `using namespace std;` is present at file top; small edits may preserve that style.

## Guardrails for AI edits
- Keep changes minimal and local. This is a tiny sample; avoid large architectural changes unless requested.
- Preserve: class names, virtual/override semantics, `main` behavior (construct → call show → delete). If you change allocation style, ensure program still prints the same lines.
- Do not remove `virtual` on `Animal::show()` or `override` on derived methods without explicit reason — these are the core demonstration points.
- If you introduce new headers or files, update the `Build & run` section with commands and keep the repository runnable locally.

## What else to look for
- There are no tests, CI workflows, or external dependencies in this repo.
- If adding tests or CI, a minimal approach is recommended (single job that builds and runs the compiled binary and checks stdout).

## When to ask the user
- If a proposed change touches memory management (converting raw pointers to smart pointers) or expands to multiple files, ask whether breaking the single-file pedagogical layout is acceptable.

---
If anything here is unclear or you want the file tailored to a different workflow (e.g., MinGW vs MSYS, or adding a GitHub Actions workflow), tell me which target and I will update this file.
