echo "What is the commit Message ?"
read commitMessage
sudo git add .
sudo git commit -m commitMessage
sudo git push origin main
