echo "What is the commit Message ?"
read x
sudo git add .
sudo git commit -m "$x"
sudo git push origin main
