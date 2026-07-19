const slider = document.querySelector('.slider');
const slides = document.querySelectorAll('.slide');
const prevBtn = document.getElementById('prev');
const nextBtn = document.getElementById('next');

let index = 0;

function showSlide() {
  slider.style.transform = `translateX(${-index * 300}px)`;
}

nextBtn.addEventListener('click', () => {
  if (index < slides.length - 1) {
    index++;
    showSlide();
  }
});

prevBtn.addEventListener('click', () => {
  if (index > 0) {
    index--;
    showSlide();
  }
});

    let index = 0;
    function moveSlide(step) {
      const slides = document.getElementById("slides");
      const total = slides.children.length;
      index = (index + step + total) % total;
      slides.style.transform = `translateX(-${index * 600}px)`;
  