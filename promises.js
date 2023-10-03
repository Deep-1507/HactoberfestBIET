//Promises are a way to handle asynchronous operations in JavaScript, providing a clean way to handle success and error cases.
//Here JavaScript Code for its Demonstartion

function fetchData() {
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        const data = { message: 'Data fetched' };
        resolve(data);
        // or reject(new Error('Failed to fetch data'));
      }, 1000);
    });
  }
  
  fetchData()
    .then((data) => {
      console.log(data.message);
    })
    .catch((error) => {
      console.error(error);
    });
  