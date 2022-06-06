echo "What is the commit Message ?"
read codeupdate
sudo git add .
# echo $codeupdate
sudo git commit -m '$codeupdated'
sudo git push origin main
