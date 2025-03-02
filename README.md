## `CreateDesktopFolder` - A C Program to Create a Folder on the Desktop

### 📄 **Description**
This C program creates a new folder called **"CreateDesktopFolder"** on your **Desktop**. It works on both **Windows** and **Linux/macOS** systems, automatically detecting your operating system and creating the folder in the appropriate location.

### 💡 **Why This Project?**
This project helps demonstrate how to:
- Create directories (folders) using C.
- Work with system paths like the Desktop folder.
- Handle platform-specific differences in file and folder paths (Windows vs. Linux/macOS).

---

### 🔧 **How to Set Up and Run the Program**

#### 1. **Prerequisites**
To run this program, you need to have:
- A **C Compiler** (e.g., GCC for Linux/macOS or MinGW for Windows).
- Basic knowledge of using the **Command Line/Terminal**.

#### 2. **Cloning the Repository**
If you haven’t done so yet, first clone the repository to your local machine. Open your terminal/command prompt and run:

```bash
git clone https://github.com/DA-Rivindi/CreateFolderC.git
```

This will create a folder with the name `CreateDesktopFolder` on your machine, containing all the files from the repository.

#### 3. **Compiling the Program**

**For Windows:**
1. Open **Git Bash** or **Command Prompt**.
2. Navigate to the project folder:
   ```bash
   cd C:/path/to/CreateDesktopFolder
   ```
3. Compile the program using MinGW or any C compiler:
   ```bash
   gcc create_folder.c -o create_folder.exe
   ```

**For Linux/macOS:**
1. Open **Terminal**.
2. Navigate to the project folder:
   ```bash
   cd /path/to/CreateDesktopFolder
   ```
3. Compile the program using GCC:
   ```bash
   gcc create_folder.c -o create_folder
   ```

#### 4. **Running the Program**
Once compiled, run the program using the following command:

**For Windows:**
```bash
./create_folder.exe
```

**For Linux/macOS:**
```bash
./create_folder
```

The program will create a folder called **"MyNewFolder"** on your **Desktop**.

---

### 📁 **What the Program Does**
- **Windows**: It checks your **Desktop** folder (located in `C:\Users\YourUsername\Desktop`) and creates the folder **MyNewFolder** there.
- **Linux/macOS**: It checks your **Desktop** folder (located in `~/Desktop`) and creates the folder **MyNewFolder**.

If the folder already exists, it will not create a new one, ensuring no conflicts.

---

### 🛠 **How It Works (Behind the Scenes)**
- The program first detects your operating system to determine the correct path to the **Desktop**.
- It uses system libraries like `windows.h` (for Windows) and `sys/stat.h` (for Linux/macOS) to create the directory.
- The program checks if the folder already exists to prevent errors from overwriting it.

---

### 🚀 **Contributing**
If you want to contribute to this project, feel free to:
1. Fork this repository.
2. Make your changes.
3. Create a **Pull Request**.

We welcome contributions and suggestions! 🌟

---

### 📜 **License**
This project is licensed under the **MIT License**. See the **LICENSE** file for more information.

---

### 📚 **References**
- [GitHub Guides](https://guides.github.com/)
- [C Programming Language](https://en.wikipedia.org/wiki/C_(programming_language))
- [GNU GCC Compiler Documentation](https://gcc.gnu.org/doc/)

---

### 📝 **Future Improvements**
- Add a command-line option to choose the folder name.
- Handle additional OS types (e.g., macOS-specific features).
- Make the folder name customizable by the user.

---

### 💬 **Contact**
For any questions or feedback, feel free to contact me via GitHub or email!

---

### 📚 **Example Output**
Once you run the program, you should see something like this in the terminal:

```
Folder created successfully at: C:\Users\YourUsername\Desktop\MyNewFolder
```

Or, on Linux/macOS:

```
Folder created successfully at: /home/YourUsername/Desktop/MyNewFolder
```

---
