---
layout: post
title:  "Custom Blog Part 1/?"
date: 2016-4-6 20:39:00
---

# Custom Blog, Part 1 of ...

Don't get me wrong, Jekyll is great.

But wouldn't it be awesome if you saw `Don't get me wrong, but Jekyll is great` _somewhere_
on the blog before clicking on this post?

That's why I decided to create my own static site generator, partially because I want to have
full flexibility, and it seems like a rather useful project to kick off my summer.

This blog post is part 1 of X blog posts detailing this process, where X is some random number
that has not been determined yet. I really like it when other people write about their thought process
when building stuff, so I thought why not do the same. This first part will mostly talk about
designing the actual functionality and UX of the generator, like what things it supports and what
features it has built-in, and then the other posts will actually be building the generator. I also 
predict at least one post discussing debugging, and probably another one comparing what I **thought** 
it would be vs. what it **actually** is, finished and functional.


## Static Site Generator

I should have probably _named_ it first, something funny, humourous, clever... but nope.
I called the repo [`blog.`](http://www.github.com/redsn0w422/blog)


What is a static site generator? Basically, it adds some level of automation to creating websites
that aren't dynamic, or don't have some back-end hosting them. Static sites are typically some number of 
`.html` files, linked together in some fashion. Jekyll is a pretty popular static site generator,
mostly because you feed it `markdown` and it spits out a lot of pretty looking `html.` Problem is, 
it does a lot of the heavy CSS and design work for you, and rather than figuring out how to change all that,
I just decided to make my own.


## Creating the Generator

As soon as I decided I wanted to build a generator, I created a GitHub repo, and as usual, clicked `Initialize README.md.`


Couple minutes after that I thought, _"I should probably write up what this is going to be ... so I don't forget."_ And so I wrote down this:

~~~~ markdown
_specs (apr 8)_
- python
- markdown
- **lots** of customization
~~~~

I knew I wanted to write in markdown, because the couple months of using it with Jekyll 
showed me how powerful it was to not have to write `<p>` or `<h1>`, 
while still having the ability to inline those tags to get greater customization. 
Python was my go-to simply because after about ... 3 seconds I was able to find a Python-markdown library. 
(I'm open to other languages, but Python is slick and would make the development process a lot easier.)
And lastly, customization - the reason behind the project. I wanted to make sure that from day-one I would 
prioritize customization.


To be continued...

