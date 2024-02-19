import os

def remove_first_10_lines_from_c_files(directory):
    for root, dirs, files in os.walk(directory):
        for file in files:
            if file.endswith(".c"):
                filepath = os.path.join(root, file)
                with open(filepath, 'r') as file:
                    lines = file.readlines()
                with open(filepath, 'w') as file:
                    file.writelines(lines[10:])

# Replace '/path/to/your/directory' with the actual path to your directory
remove_first_10_lines_from_c_files('./')
