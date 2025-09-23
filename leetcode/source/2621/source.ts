// 2621. Sleep

const sleep = async (millis: number): Promise<void> => {
    return await new Promise(resolve => setTimeout(resolve, millis));
};
