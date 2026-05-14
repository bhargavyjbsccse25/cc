nitial configuration ( once on your local machine) 
1. 
>> git config --global user.name "Your Name"   -----------why global and what else could be used insteAd of global? 
>> git config --global user.email "your@email.com" 
>> git config --global color.ui auto  ---------------some example output of this 
---------------------------------------------- 

Pushing------------------- 
1. 
Step 1: Create a New Repository on GitHub 
2.
Step 2: Open Terminal / Command Prompt (Make sure the path is correct) 
>> cd path/to/your/project 
3.
Step 3: Initialize Git 
>>  git init    --------------(converts an existing folder into a Git repository) 
4.
Step 4: Add All Files- Moves file from Working Directory to Staging Area 
>> git add . (Add all files) 
5.
Step 5: Commit the Files 
>> git commit -m "Initial commit" ----- descriptive message. 
6. 
Step 6: Connect to GitHub Repository 
>> git remote add origin <html path> 
7.
Step 7: Push to GitHub 
>> git branch -M main 
>> git push -u origin main 

Cloning------------------- 
1. Open repository. 
2. Click on code button and copy url. 
3. open terminal and navigate to desired directory. 
4. >> git clone <url> 
5. Enter the repository...(cd repository name) 

Forking-------------------- 
1. Open the Repository. 
2. On the top-right corner of the repository page- click Fork. 
3. Select Your Account. 
4. --Forked repo is created. 
5. As a good practice, clone it and then experiment with it. 
------------------------------------------ 

Pull request 
1- Fork the Repository 
------------------------------------------------------- 
2- Clone the Forked Repo (Local Machine pe) 
git clone https://github.com/your-username/repo-name.git 
cd repo-name 
-------------------------------------------------------
3- Upstream the Original Repo 
git remote add upstream <path of original repo owner> 
Check: git remote -v 
------------- 
To set different origin- 
git remote set-url origin <forked repo link> 
------------------------------------------------------- 
4- New Branch  
git checkout -b feature-update 
code . 
--open vs code --
----------------------------------------------------- 
5- Edit the code Check: 
git status
------------------------------------------------------- 
6-  Changes Stage + Commit 
  git add . 
  git commit -m "type a message here" 
------------------------------------------------------- 
7-  Push it back tour fork 
git push origin feature-update 
--------- 
Note- To remove origin and add a new origin, follow this- 
git remote remove origin 
git remote add origin <path of forked repo--https://github.com/rkjune/jwt_auth_forked.git> 
------------------------------------------------------- 
8- create  Pull Request Open your forked repo in your github account click "Compare & pull request" 
Base repo: original repo 
Compare: your branch (feature-update) 
Type -Title aur description Create Pull Request 
------------------------------------------------------- 
9- Review & Merge (done by owner) 




Steps for merge conflict
1. mkdir merge-demo
2. cd merge-demo
3. git init

Create Initial file and commit-
4. echo Once upon a time, there was a coder. > story.txt
5. git add story.txt
6. git commit -m "Initial commit"

Create branch A and change the original line
7. git checkout -b feature-A
8. echo Once upon a time, there was a coder.They loved working with Git. > story.txt
9. git add story.txt
10. git commit -m "Feature A change"
Return to main
11. git checkout master
Create Branch B and change the same line differently
12. git checkout -b feature-B
13. echo Once upon a time, there was a coder. They enjoyed solving puzzles. > story.txt
14. git add story.txt
15. git commit -m "Feature B change"
Merge to create conflict
16. git checkout master
17. git merge feature-A
18. git merge feature-B
Now open file and resolve conflict manually
19. notepad story.txt
20. Replace the
<<<<<<< HEAD
They loved working with Git.
=======
They enjoyed solving puzzles.
>>>>>>> feature-B
with the entire text with any content of your choice.
21. Save and the close the file manually
Final Commit
22. git add story.txt
23. git commit -m "Resolved merge conflict"

