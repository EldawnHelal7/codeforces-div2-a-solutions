import os

README_HEADER = """# 🧠 Codeforces Div. 2 A Solutions

This repository contains my personal solutions to **Codeforces Division 2 A** problems.

Each `.cpp` file:
- Includes a comment with the problem link
- Has a simple explanation in code comments
- Is written in modern C++ (C++17+)

---

## ✅ Problems Solved
"""

README_FOOTER = """
---

## 💻 How to Use

1. Clone the repo:
   ```bash
   git clone https://github.com/your-username/codeforces-div2a.git
   ```

2. Open in CLion, VS Code, or compile manually:
   ```bash
   g++ -std=c++17 problem.cpp -o problem
   ./problem
   ```

---

## 🏷️ Tags

Implementation, Brute Force, Beginner Practice

---

## 📜 License

This repository is licensed under the [MIT License](LICENSE).
"""

def extract_problem_info(filename):
    with open(filename, 'r') as f:
        for line in f:
            if 'http' in line:
                return f"- [{filename} - Link]({line.strip().split()[-1]})"
    return f"- {filename}"

def main():
    cpp_files = [f for f in os.listdir('.') if f.endswith('.cpp')]
    cpp_files.sort()
    problem_entries = [extract_problem_info(f) for f in cpp_files]

    with open("README.md", "w") as readme:
        readme.write(README_HEADER)
        readme.write("\n".join(problem_entries))
        readme.write(README_FOOTER)

if __name__ == "__main__":
    main()
