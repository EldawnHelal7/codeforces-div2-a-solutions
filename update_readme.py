import os

# Title and description for the README
readme_lines = [
    "# Codeforces Div2 A Solutions\n\n",
    "This repository contains my solutions to Codeforces Division 2 A problems.\n",
    "Each file corresponds to a specific problem I've solved in C++.\n\n",
    "## Solved Problems:\n\n"
]

# Get all .cpp files in the current directory
cpp_files = [f for f in os.listdir('.') if f.endswith('.cpp')]

# Sort files alphabetically
cpp_files.sort()

# Add each file to the README list
for file in cpp_files:
    # Format as a simple list item (or you can link it to GitHub)
    readme_lines.append(f"- {file}\n")

# Write to README.md
with open("README.md", "w", encoding="utf-8") as readme_file:
    readme_file.writelines(readme_lines)

print("README.md has been updated successfully!")
