echo "What is the commit Message ?"
read codeupdate
sudo git add .
sudo git commit -m '$codeupdated'
sudo git push origin main
