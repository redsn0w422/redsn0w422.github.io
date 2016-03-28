import os

for filename in os.listdir("."):
	pre, ext = os.path.splitext(filename)
	if ext == ".JPG":
		new_ext = ".jpg"
		os.rename(filename, pre+new_ext)
	if ext == ".PNG":
		new_ext = ".png"
		os.rename(filename, pre+new_ext)
