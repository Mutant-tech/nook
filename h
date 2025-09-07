<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <title>Public Domain Library</title>
  <style>
    body { font-family: sans-serif; padding: 20px; background: #f9f9f9; }
    h1 { text-align: center; }
    .book-list { display: flex; flex-wrap: wrap; justify-content: center; }
    .book {
      background: #fff;
      border: 1px solid #ccc;
      border-radius: 6px;
      width: 180px;
      margin: 10px;
      padding: 10px;
      text-align: center;
      box-shadow: 2px 2px 6px rgba(0,0,0,0.1);
    }
    .book img { max-width: 100%; height: auto; border-radius: 4px; }
    .reader { display: none; max-width: 800px; margin: auto; white-space: pre-wrap; background: #fff; padding: 20px; border-radius: 8px; box-shadow: 0 0 10px rgba(0,0,0,0.1); }
    .back-btn { margin: 20px; display: block; text-align: center; }
  </style>
</head>
<body>

<h1>📚 Public Domain Library</h1>
<div class="book-list" id="library">
  <div class="book" onclick="readBook('dracula')">
    <img src="data:image/jpeg;base64,/* INSERT BASE64 IMAGE HERE */" alt="Dracula">
    <h3>Dracula</h3>
  </div>
  <div class="book" onclick="readBook('mobydick')">
    <img src="data:image/jpeg;base64,/* INSERT BASE64 IMAGE HERE */" alt="Moby-Dick">
    <h3>Moby-Dick</h3>
  </div>
  <div class="book" onclick="readBook('janeeyre')">
    <img src="data:image/jpeg;base64,/* INSERT BASE64 IMAGE HERE */" alt="Jane Eyre">
    <h3>Jane Eyre</h3>
  </div>
</div>

<div class="reader" id="reader">
  <a href="#" class="back-btn" onclick="closeReader()">← Back to Library</a>
  <div id="book-content"></div>
</div>

<script>
const books = {
  dracula: `CHAPTER I
Jonathan Harker’s Journal
3 May. Bistritz.—Left Munich at 8:35 P.M., on 1st May, ...`,
  mobydick: `Call me Ishmael. Some years ago—never mind how long precisely...`,
  janeeyre: `There was no possibility of taking a walk that day. We had been wandering...`
};

function readBook(id) {
  document.getElementById('library').style.display = 'none';
  document.getElementById('reader').style.display = 'block';
  document.getElementById('book-content').textContent = books[id];
}

function closeReader() {
  document.getElementById('reader').style.display = 'none';
  document.getElementById('library').style.display = 'flex';
}
</script>

</body>
</html>
