const cartas= document.querySelectorAll('.cartas');//coloca a div cartas em uma constante
let cartavirada= false;
let carta1;
let carta2;

function virarcarta(){
    this.classList.add('flip');

    if(!cartavirada){
        cartavirada=true;
        carta1= this;//referencia a 1a carta clicada
        //primeira vez que a carta é clicada
    }else{
        cartavirada=false;
        carta2= this;//referencia a segunda carta clicada
        //segunda vez que a carta é clicada

        if(carta1.dataset.carta===carta2.dataset.carta){
            carta1.removeEventListener('click', virarcarta);
            carta2.removeEventListener('click', virarcarta);
            
        }else{
            setTimeout(() => {
            carta1.classList.remove('flip');
            carta2.classList.remove('flip');
        }, 1000);
       
        }
        
    }
}

(function randomizar(){
    cartas.forEach(carta=>{
        let aleatorio= Math.floor(Math.random()*12);
        carta.style.order= aleatorio;
    })
})();


cartas.forEach(carta =>carta.addEventListener('click', virarcarta));//para cada carta é adicionado um evento "clique"