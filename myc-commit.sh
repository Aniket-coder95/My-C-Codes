echo "What is the commit Message ?"
read commitMessage
git add .
git commit -m commitMessage
git push origin main
